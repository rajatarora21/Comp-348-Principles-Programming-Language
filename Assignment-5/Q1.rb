File.open("input.txt","r") do |f|
	char_count=0
	f.each_char do |c|
		if c!=32.chr and c!="\n"
			char_count+=1
			puts c
		end
	end
	puts char_count
end

